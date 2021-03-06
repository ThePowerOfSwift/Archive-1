/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotificationInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _alertActionLocalizationKey;
    NSString * _alertBody;
    NSString * _alertLaunchImage;
    NSArray * _alertLocalizationArgs;
    NSString * _alertLocalizationKey;
    NSString * _category;
    NSArray * _desiredKeys;
    bool  _shouldBadge;
    bool  _shouldSendContentAvailable;
    NSString * _soundName;
}

@property (nonatomic, copy) NSString *alertActionLocalizationKey;
@property (nonatomic, copy) NSString *alertBody;
@property (nonatomic, copy) NSString *alertLaunchImage;
@property (nonatomic, copy) NSArray *alertLocalizationArgs;
@property (nonatomic, copy) NSString *alertLocalizationKey;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) bool shouldBadge;
@property (nonatomic) bool shouldSendContentAvailable;
@property (nonatomic, copy) NSString *soundName;

+ (id)notificationInfo;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alertActionLocalizationKey;
- (id)alertBody;
- (id)alertLaunchImage;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)desiredKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (void)setSoundName:(id)arg1;
- (bool)shouldBadge;
- (bool)shouldSendContentAvailable;
- (id)soundName;

@end
