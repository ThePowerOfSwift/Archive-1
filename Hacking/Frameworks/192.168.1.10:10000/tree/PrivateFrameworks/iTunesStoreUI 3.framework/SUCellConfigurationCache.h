/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUCellConfigurationCache : NSObject {
    id  _cellContext;
    NSMutableArray * _configurations;
}

@property (nonatomic, retain) id cellContext;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (id)cellContext;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 tableHeight:(double)arg2;
- (void)reset;
- (void)resetLayoutCaches;
- (void)setCellContext:(id)arg1;

// Image: /System/Library/AccessibilityBundles/iTunesStoreUIFramework.axbundle/iTunesStoreUIFramework

+ (Class)safeCategoryBaseClass;

- (id)configurationForRow:(unsigned long long)arg1;
- (void)setCellReuseSource:(id)arg1;

@end
