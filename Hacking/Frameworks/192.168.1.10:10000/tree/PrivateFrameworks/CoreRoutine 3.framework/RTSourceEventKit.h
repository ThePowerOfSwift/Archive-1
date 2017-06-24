/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceEventKit : RTSource {
    bool  _allDay;
    NSDate * _endDate;
    NSString * _eventIdentifier;
    NSString * _location;
    NSDate * _startDate;
    NSString * _suggestionInfo_opaqueKey;
    NSString * _title;
}

@property (getter=isAllDay, nonatomic, readonly) bool allDay;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSString *eventIdentifier;
@property (nonatomic, readonly, retain) NSString *location;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (nonatomic, readonly, retain) NSString *suggestionInfo_opaqueKey;
@property (nonatomic, readonly, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)eventIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(bool)arg6 suggestionInfo_opaqueKey:(id)arg7;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)startDate;
- (id)suggestionInfo_opaqueKey;
- (id)title;

@end