/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate> {
    <HUCCGridViewControllerDelegate> * _delegate;
    unsigned long long  _itemType;
    long long  _layoutStyle;
    bool  _needsLayoutOptionsUpdate;
    NSMapTable * _overrideCellLayoutOptionsByItem;
    bool  _viewVisible;
}

@property (nonatomic, readonly) HUGridFlowLayout *collectionViewLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUCCGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUCCGridItemManager *itemManager;
@property (nonatomic, readonly) unsigned long long itemType;
@property (nonatomic, readonly) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) bool needsLayoutOptionsUpdate;
@property (nonatomic, retain) NSMapTable *overrideCellLayoutOptionsByItem;
@property (readonly) Class superclass;
@property (getter=isViewVisible, nonatomic) bool viewVisible;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)_createLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1 layoutStyle:(long long)arg2 itemType:(unsigned long long)arg3;
+ (struct { unsigned long long x1; unsigned long long x2; })_gridLayoutForItemType:(unsigned long long)arg1 sizeSubclass:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_cellLayoutOptionsForItem:(id)arg1;
- (void)_enqueueLayoutOptionsUpdate;
- (bool)_requiresUnlockToPerformActionForItem:(id)arg1;
- (void)_updateLayoutOptions;
- (void)_updateMaximumNumberOfItems;
- (id)allCellClasses;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (bool)dismissQuickControlAnimated:(bool)arg1;
- (id)initWithItemType:(unsigned long long)arg1 delegate:(id)arg2;
- (bool)isViewVisible;
- (bool)itemManager:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2;
- (unsigned long long)itemType;
- (id)layoutOptions;
- (void)layoutOptionsEditor:(id)arg1 didUpdateLayoutOptions:(id)arg2;
- (void)layoutOptionsEditorDidFinish:(id)arg1;
- (long long)layoutStyle;
- (bool)needsLayoutOptionsUpdate;
- (id)overrideCellLayoutOptionsByItem;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 pressedStateDidChange:(bool)arg2 forItem:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setNeedsLayoutOptionsUpdate:(bool)arg1;
- (void)setOverrideCellLayoutOptionsByItem:(id)arg1;
- (void)setViewVisible:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

// Image: /System/Library/AccessibilityBundles/HomeUI.axbundle/HomeUI

+ (Class)safeCategoryBaseClass;

- (void)configureCell:(id)arg1 forItem:(id)arg2;

@end
