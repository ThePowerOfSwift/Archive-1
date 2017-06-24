/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {
    <TSKCompatibilityDelegate> * _compatibilityDelegate;
}

@property (getter=isActivating, readonly) bool activating;
@property (nonatomic, readonly) NSDate *applicationLaunchTime;
@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) NSString *bladerunnerContainerIdentifier;
@property (nonatomic, readonly) NSString *cloudKitContainerIdentifier;
@property (nonatomic, retain) <TSKCompatibilityDelegate> *compatibilityDelegate;
@property (nonatomic, readonly) bool designModeEnabled;
@property (nonatomic, readonly) NSString *documentTypeDisplayName;
@property (nonatomic, readonly) NSString *documentTypeDisplayNameForSharingInvitation;
@property (nonatomic) unsigned long long iWorkAuthorColorIndex;
@property (nonatomic, copy) NSString *iWorkAuthorName;
@property (nonatomic, readonly) NSString *iWorkAuthorPrivateID;
@property (getter=isInBackground, readonly) bool inBackground;
@property (nonatomic, readonly) bool isCanvasFullScreen;
@property (nonatomic, readonly) bool performanceModeEnabled;
@property (nonatomic, readonly) bool tableCellInspectorShowsNaturalAlignment;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (nonatomic, readonly) bool tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (nonatomic, readonly) NSString *templateTypeDisplayName;
@property (nonatomic, readonly) bool textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (id)platform_sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedDelegate;

- (void).cxx_destruct;
- (id)appChartPropertyOverrides;
- (id)applicationLaunchTime;
- (id)applicationName;
- (id)applicationNameForTitleBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationToolbarFrame;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (id)compatibilityDelegate;
- (id)createCompatibilityDelegate;
- (void)dealloc;
- (id)defaultHyperlinkURL;
- (bool)designModeEnabled;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (unsigned long long)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
- (id)iWorkAuthorPrivateID;
- (id)init;
- (id)invalidURLSchemes;
- (bool)isActivating;
- (bool)isCanvasFullScreen;
- (bool)isInBackground;
- (void)logDocumentCreationWithImportState:(bool)arg1;
- (void)logLaunchTime;
- (bool)openURL:(id)arg1;
- (bool)performanceModeEnabled;
- (id)previewImageForType:(id)arg1;
- (void)setCompatibilityDelegate:(id)arg1;
- (void)setIWorkAuthorColorIndex:(unsigned long long)arg1;
- (void)setIWorkAuthorName:(id)arg1;
- (bool)shouldRenderContactShadow;
- (bool)shouldRenderCurvedShadow;
- (bool)shouldValidateMasterLayoutWhileInsertingRows;
- (bool)sidebarPositionRespectsUserInterfaceLayoutDirection;
- (bool)supportsRTL;
- (bool)supportsShrinkTextToFit;
- (bool)tableCellInspectorShowsNaturalAlignment;
- (bool)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (bool)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (bool)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)templateTypeDisplayName;
- (bool)textInspectorShowsMoreSubpane;

@end