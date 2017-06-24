/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachment : NSObject <MFCancelable> {
    MFAttachmentManager * _attachmentManager;
    <MFDataConsumer> * _customConsumer;
    NSString * _disposition;
    NSProgress * _downloadProgress;
    id /* block */  _fetchCompletionBlock;
    bool  _isAutoArchive;
    bool  _isDataAvailableLocally;
    unsigned long long  _lastProgressBytes;
    double  _lastProgressTime;
    MFMimePart * _part;
    MFAttachmentPlaceholder * _placeholder;
    NSURL * _url;
    bool  _wantsCompletionBlockOffMainThread;
}

@property (nonatomic) MFAttachmentManager *attachmentManager;
@property (copy) NSString *contentID;
@property (nonatomic, retain) <MFDataConsumer> *customConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decodedFileSize;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *disposition;
@property (nonatomic, retain) NSProgress *downloadProgress;
@property (nonatomic) unsigned long long encodedFileSize;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, copy) id /* block */ fetchCompletionBlock;
@property (nonatomic, copy) NSString *fileName;
@property (readonly) NSString *fileUTType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *icsRepresentation;
@property (nonatomic) struct CGSize { double x1; double x2; } imageDimensions;
@property (readonly) NSString *inferredMimeType;
@property (readonly) bool isAutoArchive;
@property (readonly) bool isContainedInCompose;
@property (readonly) bool isContainedInRFC822;
@property (readonly) bool isDataAvailableLocally;
@property bool isPlaceholder;
@property (nonatomic) unsigned long long lastProgressBytes;
@property (nonatomic) double lastProgressTime;
@property (nonatomic, retain) MFMailDropMetadata *mailDropMetadata;
@property (nonatomic, retain) NSString *meetingStorePersistentID;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, retain) MFMimePart *part;
@property (readonly) NSString *path;
@property (nonatomic, retain) MFAttachmentPlaceholder *placeholder;
@property (nonatomic, copy) NSString *remoteImageFileName;
@property (readonly) bool shouldAutoDownload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool wantsCompletionBlockOffMainThread;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)_dataProvider;
- (id)_fileUTTypeForFileName:(id)arg1;
- (id)attachmentContentTypeForFileName:(id)arg1;
- (id)attachmentManager;
- (void)cancel;
- (bool)conformsToType:(id)arg1;
- (id)contentID;
- (bool)contentTypeConformsToEvent;
- (bool)contentTypeConformsToEventICS;
- (bool)contentTypeConformsToEventVCS;
- (bool)contentTypeConformsToIWork;
- (bool)contentTypeConformsToMarkup;
- (bool)contentTypeConformsToPassbook;
- (bool)contentTypeConformsToProvisionment;
- (bool)contentTypeConformsToVCard;
- (id)customConsumer;
- (void)dealloc;
- (id)decodeFilterWithDataConsumer:(id)arg1;
- (unsigned long long)decodedFileSize;
- (id)description;
- (id)disposition;
- (id)downloadProgress;
- (unsigned long long)encodedFileSize;
- (id /* block */)fetchCompletionBlock;
- (void)fetchData;
- (id)fetchDataSynchronously:(id*)arg1;
- (id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(bool)arg2;
- (id)fetchDataToURL:(id*)arg1;
- (id)fetchLocalData;
- (id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(bool)arg2;
- (id)fetchPlaceholderData;
- (id)fileAttributes;
- (id)fileName;
- (id)fileNameByStrippingZipIfNeeded:(bool)arg1;
- (id)fileURL;
- (id)fileUTType;
- (id)filterData:(id)arg1;
- (id)filterICSData:(id)arg1;
- (id)filterVCSData:(id)arg1;
- (unsigned long long)hash;
- (id)inferredMimeType;
- (id)initWithURL:(id)arg1 attachmentManager:(id)arg2;
- (bool)isAutoArchive;
- (bool)isAvailable;
- (bool)isCached;
- (bool)isContainedInCompose;
- (bool)isContainedInRFC822;
- (bool)isDataAvailableLocally;
- (bool)isEqual:(id)arg1;
- (bool)isImageFile;
- (bool)isMailDrop;
- (bool)isMailDropPhotoArchive;
- (bool)isPlaceholder;
- (unsigned long long)lastProgressBytes;
- (double)lastProgressTime;
- (id)mailDropMetadata;
- (id)metadataValueForKey:(id)arg1;
- (id)mimeType;
- (id)part;
- (id)path;
- (id)placeholder;
- (id)readFromDisk;
- (id)remoteImageFileName;
- (void)resetProgress;
- (void)setAttachmentManager:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setCustomConsumer:(id)arg1;
- (void)setDecodedFileSize:(unsigned long long)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setEncodedFileSize:(unsigned long long)arg1;
- (void)setFetchCompletionBlock:(id /* block */)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setLastProgressBytes:(unsigned long long)arg1;
- (void)setLastProgressTime:(double)arg1;
- (void)setMailDropMetadata:(id)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMimeType:(id)arg1;
- (void)setPart:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setRemoteImageFileName:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setWantsCompletionBlockOffMainThread:(bool)arg1;
- (bool)shouldAutoDownload;
- (unsigned long long)sizeOnDisk;
- (id)textEncodingGuessWithData:(id)arg1;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;
- (void)updateProgressWithCurrentBytes:(unsigned long long)arg1;
- (id)url;
- (bool)wantsCompletionBlockOffMainThread;
- (void)writeToDiskWithData:(id)arg1;

// Image: /System/Library/AccessibilityBundles/MessageUIFramework.axbundle/MessageUIFramework

+ (Class)safeCategoryBaseClass;

- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)attachmentElementHTMLStringWithAttributes:(id)arg1;
+ (id)passPlaceholder;

- (id)_contentTypeByStrippingZipIfNeeded:(bool)arg1;
- (unsigned long long)_imageScale;
- (id)_imageScalingKeyForImageScale:(unsigned long long)arg1;
- (bool)_isContentTypeDisplayableByMobileMail;
- (void)_setImageScale:(unsigned long long)arg1;
- (id)className;
- (void)compressContentsWithCompletion:(id /* block */)arg1;
- (double)constrainedWidth;
- (id)contentType;
- (void)decompressContentsWithCompletion:(id /* block */)arg1;
- (void)enqueueScaleAttachmentWithCompletionBlock:(id /* block */)arg1;
- (id)eventID;
- (id)filenameStrippingZipIfNeededUseApplications:(bool)arg1;
- (bool)hasCalendarMetadata;
- (id)icsRepresentation;
- (struct CGSize { double x1; double x2; })imageDimensions;
- (struct CGSize { double x1; double x2; })imageDimensionsWithData:(id)arg1;
- (unsigned long long)imageScalingFlags;
- (bool)isCalendarFile;
- (bool)isContentCompressed;
- (bool)isContentOpenable;
- (bool)isDisplayableByWebKit;
- (bool)isDisplayableImage;
- (bool)isDisplayableInline;
- (bool)isDisplayableInlineWithData:(id)arg1;
- (bool)isDisplayableInsidePlugin;
- (bool)isMedia;
- (bool)isPDFFile;
- (bool)isPass;
- (bool)isRFC822;
- (bool)isRestrictedMIMEType;
- (struct CGSize { double x1; double x2; })markupSizeForImageScale:(unsigned long long)arg1;
- (id)markupStringForCompositionWithPrependedBlankLine:(bool)arg1 imageScale:(unsigned long long)arg2;
- (id)markupStringForDisplayWithData:(id)arg1 displayStyle:(int)arg2 printableWidth:(double)arg3 allowAttachmentElement:(bool)arg4;
- (id)meetingStorePersistentID;
- (bool)needsColorspaceConversion;
- (id)pass;
- (id)passWithError:(id*)arg1;
- (unsigned long long)scaledFileSize;
- (unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1;
- (id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(bool)arg2 attachmentContextID:(id)arg3;
- (void)setEventID:(id)arg1;
- (void)setIcsRepresentation:(id)arg1;
- (void)setImageDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)setMeetingStorePersistentID:(id)arg1;

@end