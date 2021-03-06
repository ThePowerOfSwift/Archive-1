/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface __PGButton : UIButton {
    PGBackdropView * _backdropView;
    UIImage * _backgroundImage;
    long long  _buttonStyle;
    UIImageView * _foregroundImageView;
    UIImageView * _highlightImageView;
}

@property (nonatomic, readonly) long long buttonStyle;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

- (void).cxx_destruct;
- (void)_updateHighlightImageView;
- (long long)buttonStyle;
- (id)initWithButtonStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;

// Image: /System/Library/AccessibilityBundles/Pegasus.axbundle/Pegasus

+ (Class)safeCategoryBaseClass;

- (id)_accessibilityCustomActions;
- (id)accessibilityPath;

@end
