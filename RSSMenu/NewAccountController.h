#import "Account.h"

@protocol NewAccountControllerDelegate;

@interface NewAccountController : NSWindowController <NSTextFieldDelegate> {
    id<NewAccountControllerDelegate> delegate;
    Account *newAccount;
    
    IBOutlet NSPopUpButton *accountTypeButton;
    IBOutlet NSTextField *usernameField;
    IBOutlet NSTextField *passwordField;
    IBOutlet NSButton *OKButton;
}

- (id)initWithDelegate:(id<NewAccountControllerDelegate>)delegate;

- (IBAction)accountTypeChanged:(id)sender;

- (IBAction)cancelPressed:(id)sender;
- (IBAction)OKPressed:(id)sender;

@end


@protocol NewAccountControllerDelegate <NSObject>

- (void)newAccountControllerDidCancel:(NewAccountController *)controller;
- (void)newAccountControllerDidComplete:(NewAccountController *)controller;

@end