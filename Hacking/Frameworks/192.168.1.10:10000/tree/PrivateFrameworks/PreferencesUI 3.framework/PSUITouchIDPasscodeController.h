/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUITouchIDPasscodeController : PSUIPasscodeLockController <BiometricKitDelegate, BiometricKitUIEnrollResultDelegate, UIPopoverControllerDelegate> {
    bool  _currentlyEnablingTouchIDForPurchases;
    PSEnrollContainerViewController * _enrollController;
    UIPopoverController * _enrollmentPopoverController;
    BiometricKit * _highlightMatcher;
    NSObject<OS_dispatch_queue> * _highlightQueue;
    id /* block */  _modalFlowCancelCompletion;
    id /* block */  _modalFlowSuccessCompletion;
    long long  _storeState;
}

@property (nonatomic) bool currentlyEnablingTouchIDForPurchases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PSEnrollContainerViewController *enrollController;
@property (nonatomic, retain) UIPopoverController *enrollmentPopoverController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BiometricKit *highlightMatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *highlightQueue;
@property (nonatomic, copy) id /* block */ modalFlowCancelCompletion;
@property (nonatomic, copy) id /* block */ modalFlowSuccessCompletion;
@property (nonatomic) long long storeState;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

+ (bool)_shouldPresentEnrollmentInPopover;

- (void).cxx_destruct;
- (id)_authorizationToken;
- (void)_cancelMatching;
- (id)_fingerprintSpecifierAtIndexPath:(id)arg1;
- (id)_fingerprintSpecifierForIdentity:(id)arg1;
- (id)_passcodeControllerForSpecifier:(id)arg1;
- (void)_popEnrollmentController;
- (void)_presentPopoverForContentViewController:(id)arg1;
- (void)_setupMatching;
- (void)addEnrollment:(id)arg1;
- (void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)backgrounded:(id)arg1;
- (void)cancelModalFlow;
- (void)completeModalFlow;
- (bool)currentlyEnablingTouchIDForPurchases;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)didUnlock;
- (id)enrollController;
- (void)enrollResult:(int)arg1 identity:(id)arg2;
- (void)enrollmentCompletedForIdentity:(id)arg1;
- (id)enrollmentPopoverController;
- (id)fingerprintSpecifiers;
- (bool)hasPasscodeAndFingerprints;
- (void)hideCancelButton;
- (id)highlightMatcher;
- (id)highlightQueue;
- (id)init;
- (bool)isEnrollmentAvailable;
- (bool)isFingerprintEditingAllowed;
- (id)isTouchIDForPurchasesEnabled:(id)arg1;
- (bool)isTouchIDForPurchasesRestricted;
- (id)isTouchIDForStockholmEnabled:(id)arg1;
- (bool)isTouchIDForStockholmRestricted;
- (id)isTouchIDUnlockEnabled:(id)arg1;
- (bool)isTouchIDUnlockRestricted;
- (void)matchResult:(id)arg1;
- (id /* block */)modalFlowCancelCompletion;
- (id /* block */)modalFlowSuccessCompletion;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)presentPasscodePaneFromSpecifier:(id)arg1;
- (void)pushPasscodePane;
- (void)setCurrentlyEnablingTouchIDForPurchases:(bool)arg1;
- (void)setEnrollController:(id)arg1;
- (void)setEnrollmentPopoverController:(id)arg1;
- (void)setHighlightMatcher:(id)arg1;
- (void)setHighlightQueue:(id)arg1;
- (void)setModalFlowCancelCompletion:(id /* block */)arg1;
- (void)setModalFlowSuccessCompletion:(id /* block */)arg1;
- (void)setStoreState:(long long)arg1;
- (void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2;
- (void)setTouchIDUnlockEnabled:(id)arg1 specifier:(id)arg2;
- (void)setupTouchIDLogoHeader;
- (bool)shouldRestrictFeaturesRequiringEnrollment;
- (id)specifiers;
- (void)statusMessage:(unsigned int)arg1;
- (long long)storeState;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)touchIDSwitchSpecifiers;
- (void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1;
- (void)updateAddFingerprintSpecifier;
- (void)updateAfterFingerprintChanges;
- (void)updateStoreBiometricsState;
- (void)updateTouchIDForPurchasesSpecifier;
- (void)updateTouchIDForStockholmSpecifier;
- (void)updateTouchIDUnlockSpecifier;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/PreferencesUI.axbundle/PreferencesUI

+ (Class)safeCategoryBaseClass;

- (void)highlightFingerprintSpecifier:(id)arg1;

@end