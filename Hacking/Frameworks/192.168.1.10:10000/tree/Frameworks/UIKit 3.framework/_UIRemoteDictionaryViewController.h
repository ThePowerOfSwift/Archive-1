/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteDictionaryViewController : UITableViewController {
    NSArray * _availableDictionaries;
    _UIDictionaryManager * _dictionaryAssetManager;
}

@property (nonatomic, retain) _UIDictionaryManager *dictionaryAssetManager;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (id)_cloudBackgroundImage;
- (id)_downloadArrowImage;
- (id)_downloadButton;
- (id)_downloadImageWithTintColor:(id)arg1;
- (bool)_isStalledAutoDownloadAsset:(id)arg1;
- (id)dictionaryAssetManager;
- (id)initWithStyle:(long long)arg1;
- (void)setDictionaryAssetManager:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (Class)safeCategoryBaseClass;

- (void)_handleDownloadButton:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end