/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPNumberPad : UIControl {
    NSMutableArray * _buttons;
    bool  _numberButtonsEnabled;
}

@property (nonatomic) double buttonBackgroundAlpha;
@property (retain) NSArray *buttons;
@property (nonatomic) bool numberButtonsEnabled;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (void).cxx_destruct;
- (void)_addButton:(id)arg1;
- (double)_backgroundAlphaOfButton:(id)arg1;
- (void)_layoutGrid;
- (void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(double)arg2;
- (double)buttonBackgroundAlpha;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonUp:(id)arg1;
- (id)buttons;
- (void)dealloc;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (id)initWithButtons:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)numberButtonsEnabled;
- (void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setButtonBackgroundAlpha:(double)arg1;
- (void)setButtons:(id)arg1;
- (void)setNumberButtonsEnabled:(bool)arg1;

// Image: /System/Library/AccessibilityBundles/TelephonyUIFramework.axbundle/TelephonyUIFramework

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilityIsScannerGroup;
- (bool)_accessibilityProvidesScannerGroupElements;
- (id)_accessibilityScannerGroupElements;
- (int)_accessibilityScannerGroupTraits;

@end
