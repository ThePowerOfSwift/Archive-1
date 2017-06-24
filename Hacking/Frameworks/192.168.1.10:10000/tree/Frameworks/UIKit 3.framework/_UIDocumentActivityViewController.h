/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentActivityViewController : UIActivityViewController {
    UIDocumentInteractionController * _documentInteractionController;
    UIDocumentInteractionController * _documentInteractionControllerRetained;
    bool  _hideSystemActivities;
}

@property (nonatomic) UIDocumentInteractionController *documentInteractionController;
@property (nonatomic, retain) UIDocumentInteractionController *documentInteractionControllerRetained;
@property (nonatomic) bool hideSystemActivities;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (bool)_shouldShowSystemActivity:(id)arg1;
- (id)documentInteractionController;
- (id)documentInteractionControllerRetained;
- (bool)hideSystemActivities;
- (void)setDocumentInteractionController:(id)arg1;
- (void)setDocumentInteractionControllerRetained:(id)arg1;
- (void)setHideSystemActivities:(bool)arg1;
- (bool)sourceIsManaged;

@end