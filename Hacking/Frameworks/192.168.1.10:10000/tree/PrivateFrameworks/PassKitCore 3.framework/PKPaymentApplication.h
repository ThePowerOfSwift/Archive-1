/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    bool  _auxiliary;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    bool  _inAppPINRequired;
    NSDecimalNumber * _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    long long  _paymentNetworkIdentifier;
    unsigned long long  _paymentType;
    NSString * _sanitizedDPAN;
    NSString * _secureElementIdentifier;
    long long  _state;
    bool  _supportsContactlessPayment;
    bool  _supportsInAppPayment;
    NSString * _suspendedReason;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (getter=isAuxiliary, nonatomic) bool auxiliary;
@property (nonatomic, copy) NSString *displayName;
@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (setter=setDPANSuffix:, nonatomic, copy) NSString *dpanSuffix;
@property (nonatomic) bool inAppPINRequired;
@property (nonatomic, copy) NSDecimalNumber *inAppPINRequiredAmount;
@property (nonatomic, copy) NSString *inAppPINRequiredCurrency;
@property (nonatomic) long long paymentNetworkIdentifier;
@property (nonatomic) unsigned long long paymentType;
@property (setter=setSanitizedDPAN:, nonatomic, copy) NSString *sanitizedDPAN;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic) long long state;
@property (nonatomic, readonly) NSString *stateAsString;
@property (nonatomic) bool supportsContactlessPayment;
@property (nonatomic) bool supportsInAppPayment;
@property (nonatomic, copy) NSString *suspendedReason;

+ (id)applicationWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptedForSupportedNetworkIdentifiers:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webService:(id)arg3;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)inAppPINRequired;
- (id)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentApplicationDictionary:(id)arg1 auxiliaryApplication:(bool)arg2;
- (bool)isAuxiliary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentApplication:(id)arg1;
- (long long)paymentNetworkIdentifier;
- (unsigned long long)paymentType;
- (id)protobuf;
- (id)sanitizedDPAN;
- (id)secureElementIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuxiliary:(bool)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDPANSuffix:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setInAppPINRequired:(bool)arg1;
- (void)setInAppPINRequiredAmount:(id)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setPaymentNetworkIdentifier:(long long)arg1;
- (void)setPaymentType:(unsigned long long)arg1;
- (void)setSanitizedDPAN:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSupportsContactlessPayment:(bool)arg1;
- (void)setSupportsInAppPayment:(bool)arg1;
- (void)setSuspendedReason:(id)arg1;
- (long long)state;
- (id)stateAsString;
- (bool)supportsContactlessPayment;
- (bool)supportsInAppPayment;
- (bool)supportsWebPaymentMode:(long long)arg1 withExclusionList:(id)arg2;
- (id)suspendedReason;

@end
