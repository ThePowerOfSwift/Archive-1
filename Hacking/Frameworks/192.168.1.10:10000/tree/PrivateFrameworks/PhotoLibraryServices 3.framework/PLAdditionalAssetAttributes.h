/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAdditionalAssetAttributes : PLManagedObject {
    CLLocation * __cachedShiftedLocation;
}

@property (setter=_setCachedShiftedLocation:, nonatomic, retain) CLLocation *_cachedShiftedLocation;
@property (nonatomic, copy) NSString *adjustedFingerPrint;
@property (nonatomic) bool allowedForAnalysis;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) PLAssetDescription *assetDescription;
@property (nonatomic) short cameraCaptureDevice;
@property (nonatomic) int cloudAvalanchePickType;
@property (nonatomic) short cloudKindSubtype;
@property (nonatomic, retain) NSString *creatorBundleID;
@property (nonatomic, retain) NSString *customCollectionName;
@property (nonatomic, retain) NSString *customCollectionUUID;
@property (nonatomic, retain) NSString *customMomentName;
@property (nonatomic, retain) NSString *customMomentUUID;
@property (nonatomic, retain) NSData *distanceIdentity;
@property (nonatomic, retain) NSString *editorBundleID;
@property (nonatomic, retain) NSNumber *embeddedThumbnailHeight;
@property (nonatomic, retain) NSNumber *embeddedThumbnailLength;
@property (nonatomic, retain) NSNumber *embeddedThumbnailOffset;
@property (nonatomic, retain) NSNumber *embeddedThumbnailWidth;
@property (nonatomic, retain) NSString *exifTimestampString;
@property (nonatomic, retain) NSNumber *externalUsageIntent;
@property (nonatomic, retain) NSData *faceRegions;
@property (nonatomic, retain) id importSessionID;
@property (nonatomic, retain) NSSet *keywords;
@property (nonatomic, retain) NSDate *lastUploadAttemptDate;
@property (nonatomic, retain) NSNumber *locationHash;
@property (nonatomic, retain) NSString *longDescription;
@property (nonatomic, copy) NSString *masterFingerPrint;
@property (nonatomic, retain) NSString *montage;
@property (nonatomic, retain) id originalAssetsUUID;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic, retain) NSNumber *originalFilesize;
@property (nonatomic, retain) NSData *originalHash;
@property (nonatomic, retain) NSNumber *originalHeight;
@property (nonatomic, retain) NSNumber *originalOrientation;
@property (nonatomic, retain) NSNumber *originalResourceChoice;
@property (nonatomic, retain) NSNumber *originalWidth;
@property (nonatomic) long long pendingPlayCount;
@property (nonatomic) long long pendingShareCount;
@property (nonatomic) long long pendingViewCount;
@property (nonatomic, retain) NSSet *personReferences;
@property (nonatomic, retain) NSData *placeAnnotationData;
@property (nonatomic) long long playCount;
@property (nonatomic, retain) NSString *publicGlobalUUID;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic, retain) NSNumber *reverseLocationDataIsValid;
@property (nonatomic, retain) NSDate *sceneAnalysisTimestamp;
@property (nonatomic) short sceneAnalysisVersion;
@property (nonatomic, retain) NSSet *sceneClassifications;
@property (nonatomic) long long shareCount;
@property (nonatomic, retain) CLLocation *shiftedLocation;
@property (nonatomic, retain) NSData *shiftedLocationData;
@property (nonatomic) bool shiftedLocationIsValid;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic, retain) NSNumber *timeZoneOffset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (nonatomic, retain) NSNumber *uploadAttempts;
@property (nonatomic) int videoCpDisplayTimescale;
@property (nonatomic) long long videoCpDisplayValue;
@property (nonatomic) int videoCpDurationTimescale;
@property (nonatomic) long long viewCount;

+ (id)entityName;
+ (void)fromExtraDurationData:(id)arg1 getStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3;
+ (id)listOfSyncedProperties;
+ (id)newExtraDurationDataFromStillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

- (id)_cachedShiftedLocation;
- (void)_setCachedShiftedLocation:(id)arg1;
- (void)dealloc;
- (bool)isSyncableChange;
- (id)longDescription;
- (bool)migrateReverseLocationDataFromKeyedArchiverFormat;
- (void)setLongDescription:(id)arg1;
- (void)setShiftedLocation:(id)arg1;
- (void)setShiftedLocationIsValid:(bool)arg1;
- (id)shiftedLocation;
- (bool)supportsCloudUpload;
- (bool)validateForInsert:(id*)arg1;
- (bool)validateForUpdate:(id*)arg1;
- (void)willSave;

@end