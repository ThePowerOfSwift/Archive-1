/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIContentButton : UIButton {
    UIColor * _defaultColorForTemplate;
    UIColor * _highlightColorForTemplate;
    bool  _isRenderingImageTemplate;
    bool  _usePlatterStyle;
}

@property (nonatomic) bool usePlatterStyle;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)button;
+ (id)buttonWithImageMask:(id)arg1;
+ (id)buttonWithImageTemplate:(id)arg1;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;

- (void).cxx_destruct;
- (void)_setIsRenderingImageTemplate:(bool)arg1;
- (void)_updateStyling;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDefaultColorForTemplate:(id)arg1;
- (void)setHighlightColorForTemplate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUsePlatterStyle:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)usePlatterStyle;

// Image: /System/Library/AccessibilityBundles/SiriUI.axbundle/SiriUI

+ (Class)safeCategoryBaseClass;

- (id)accessibilityLabel;
- (bool)isAccessibilityElement;

@end