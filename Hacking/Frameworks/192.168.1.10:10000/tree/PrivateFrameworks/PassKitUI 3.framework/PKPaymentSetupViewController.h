/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    ACAccountStore * _accountStore;
    bool  _allowsManualEntry;
    long long  _context;
    <PKPaymentSetupViewControllerDelegate> * _delegate;
    bool  _hideSetupLater;
    bool  _nextButtonPushed;
    PKPaymentProvisioningController * _provisioningController;
    bool  _skipFlowPicker;
}

@property (nonatomic) bool allowsManualEntry;
@property (nonatomic) long long context;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *delegate;
@property (nonatomic, readonly, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) bool skipFlowPicker;
@property (nonatomic, readonly, retain) PKPaymentWebService *webService;

+ (id)configuredNextActionViewControllerForProduct:(id)arg1 provisioningController:(id)arg2 context:(long long)arg3 delegate:(id)arg4;

- (void).cxx_destruct;
- (id)_configuredCardListViewControllerForCredentials:(id)arg1 product:(id)arg2;
- (id)_configuredCardOnFileEntryViewControllerForCredential:(id)arg1 product:(id)arg2;
- (id)_configuredSecondaryActionViewControllerForAssociatedCredentials:(id)arg1 product:(id)arg2;
- (id)_contextSpecificStringForAggdKey:(id)arg1;
- (id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_next:(id)arg1;
- (void)_pushNextActionViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)allowsManualEntry;
- (id)configuredNextActionViewController;
- (long long)context;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3;
- (void)loadView;
- (void)privacyFooterLinkTapped:(id)arg1;
- (id)provisioningController;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setContext:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSkipFlowPicker:(bool)arg1;
- (bool)skipFlowPicker;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)webService;

@end