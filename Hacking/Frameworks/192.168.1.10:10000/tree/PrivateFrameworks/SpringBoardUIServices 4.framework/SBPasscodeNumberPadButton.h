/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

+ (int)_characterTypeForCharacter:(unsigned int)arg1;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (id)_stringCharacterForCharacter:(unsigned int)arg1;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;

- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;

// Image: /System/Library/AccessibilityBundles/SpringBoardUIServices.axbundle/SpringBoardUIServices

+ (Class)safeCategoryBaseClass;

- (bool)_accessibilitySupportsDirectioOrbManipulation;
- (unsigned long long)accessibilityTraits;

@end
