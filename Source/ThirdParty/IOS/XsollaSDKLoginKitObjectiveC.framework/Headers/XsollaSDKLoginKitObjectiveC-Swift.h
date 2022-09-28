// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef XSOLLASDKLOGINKITOBJECTIVEC_SWIFT_H
#define XSOLLASDKLOGINKITOBJECTIVEC_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AuthenticationServices;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="XsollaSDKLoginKitObjectiveC",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;

/// Authorization info
SWIFT_CLASS("_TtC27XsollaSDKLoginKitObjectiveC15AccessTokenInfo")
@interface AccessTokenInfo : NSObject
/// User JWT.
@property (nonatomic, readonly, strong) NSString * _Nonnull accessToken;
/// JWT expiration period in seconds. Default value is 3600 seconds.
@property (nonatomic, readonly) NSInteger expiresIn;
/// Refresh token for updating the <code>accessToken</code>.
@property (nonatomic, readonly, strong) NSString * _Nullable refreshToken;
/// JWT type. Can be <em>bearer</em>.
@property (nonatomic, readonly, strong) NSString * _Nonnull tokenType;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum TokenGrantType : NSInteger;

/// Set of parameters to perform JWT token generation -!- со стороны бекенда? -!-
SWIFT_CLASS("_TtC27XsollaSDKLoginKitObjectiveC19JWTGenerationParams")
@interface JWTGenerationParams : NSObject
/// The type of getting the JWT. Can be:
/// <ul>
///   <li>
///     <em>authorization_code</em> to exchange the code received in the <a href="https://developers.xsolla.com/login-api/methods/oauth-20/oauth-20-auth-by-username-and-password/">method</a> to JWT
///     The value of the <code>authCode</code> parameter must be specified.
///   </li>
///   <li>
///     <em>refresh_token</em> to get the refreshed JWT when the previous value is expired. The value of the <code>refreshToken</code> parameter must be specified.
///   </li>
///   <li>
///     <em>client_credentials</em> to get the server JWT without user participation, the values of the <code>clientId</code> and <code>clientSecret</code> parameters must be specified.
///   </li>
/// </ul>
@property (nonatomic, readonly) enum TokenGrantType grantType;
/// Your application ID from <a href="https://publisher.xsolla.com/">Publisher Account</a>.
/// You will get it after sending the request to enable the OAuth 2.0 protocol.
@property (nonatomic, readonly) NSInteger clientId;
/// The <code>refreshToken</code> value received in the response to the last call of this method. Required if <code>grant_type=refresh_token</code>.
@property (nonatomic, readonly, strong) NSString * _Nullable refreshToken;
/// Your secret key hashed according to the <a href="https://en.wikipedia.org/wiki/Bcrypt">bcrypt</a> algorithm.
/// You got it after sending the request to enable OAuth 2.0. To get your secret key again, contact your Account Manager.
@property (nonatomic, readonly, strong) NSString * _Nullable clientSecret;
/// URL to redirect the user to after account confirmation, successful authentication, or password reset confirmation.
/// To set up this parameter, contact your Account Manager.
@property (nonatomic, readonly, strong) NSString * _Nullable redirectUri;
- (nonnull instancetype)initWithGrantType:(enum TokenGrantType)grantType clientId:(NSInteger)clientId refreshToken:(NSString * _Nullable)refreshToken clientSecret:(NSString * _Nullable)clientSecret redirectUri:(NSString * _Nullable)redirectUri OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class OAuth2Params;
@class NSError;
@class NSURL;
@class UIViewController;
@class NSDate;

SWIFT_CLASS("_TtC27XsollaSDKLoginKitObjectiveC18LoginKitObjectiveC")
@interface LoginKitObjectiveC : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) LoginKitObjectiveC * _Nonnull shared;)
+ (LoginKitObjectiveC * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Authenticates the user by the username/email and password specified.
/// To finish user authentication, get the user JWT by sending the <em>Generate JWT</em> request.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     username: Username or email address.
///   </li>
///   <li>
///     password: User password.
///   </li>
///   <li>
///     oAuth2Params: Instance of <em>OAuth2Params</em>.
///   </li>
///   <li>
///     jwtParams: Instance of <em>JWTGenerationParams</em>.
///   </li>
///   <li>
///     completion: Completion with <code>Result</code>: <em>AccessTokenInfo</em> on success and Error on failure.
///   </li>
/// </ul>
- (void)authByUsernameAndPasswordWithUsername:(NSString * _Nonnull)username password:(NSString * _Nonnull)password oAuth2Params:(OAuth2Params * _Nonnull)oAuth2Params jwtParams:(JWTGenerationParams * _Nonnull)jwtParams completion:(void (^ _Nonnull)(AccessTokenInfo * _Nullable, NSError * _Nullable))completion;
- (void)uploadUserPictureWithAccessToken:(NSString * _Nonnull)accessToken imageURL:(NSURL * _Nonnull)imageURL completion:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completion;
- (void)linkSocialNetwork:(NSString * _Nonnull)providerName accessToken:(NSString * _Nonnull)accessToken redirectUrl:(NSString * _Nonnull)redirectUrl userAgent:(NSString * _Nullable)userAgent presenter:(UIViewController * _Nonnull)presenter completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
- (void)updateCurrentUserDetailsWithAccessToken:(NSString * _Nonnull)accessToken birthday:(NSDate * _Nullable)birthday firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName nickname:(NSString * _Nullable)nickname gender:(NSString * _Nullable)gender completion:(void (^ _Nonnull)(NSError * _Nullable))completion;
@end

@protocol ASWebAuthenticationPresentationContextProviding;

SWIFT_AVAILABILITY(ios,introduced=13.4)
@interface LoginKitObjectiveC (SWIFT_EXTENSION(XsollaSDKLoginKitObjectiveC))
/// Performs user authentication via the social network.
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     providerName: Name of the social network connected to Login in Publisher Account.
///     Can be: <em>amazon</em>, <em>apple</em>, <em>baidu</em>, <em>battlenet</em>, <em>discord</em>, <em>facebook</em>, <em>github</em>, <em>google</em>, <em>kakao</em>, <em>linkedin</em>, <em>mailru</em>, <em>microsoft</em>, <em>msn</em>, <em>naver</em>, <em>ok</em>, <em>paypal</em>, <em>psn</em>, <em>reddit</em>,   <em>steam</em>, <em>twitch</em>, <em>twitter</em>, <em>vimeo</em>, <em>vk</em>, <em>wechat</em>, <em>weibo</em>, <em>yahoo</em>, <em>yandex</em>, <em>youtube</em>, <em>xbox</em>.
///     If you store user data in   <a href="https://developers.xsolla.com/doc/login/how-to/users-storage-playfab">PlayFab</a>, only ‘twitch’   is available.
///   </li>
///   <li>
///     oAuth2Params: Instance of <em>OAuth2Params</em>.
///   </li>
///   <li>
///     jwtParams: Instance of <em>JWTGenerationParams</em>.
///   </li>
///   <li>
///     completion: Completion with <code>Result</code>: <em>AccessTokenInfo</em> on success and Error on failure.
///   </li>
/// </ul>
- (void)authBySocialNetwork:(NSString * _Nonnull)providerName oAuth2Params:(OAuth2Params * _Nonnull)oAuth2Params jwtParams:(JWTGenerationParams * _Nonnull)jwtParams presentationContextProvider:(id <ASWebAuthenticationPresentationContextProviding> _Nonnull)presentationContextProvider completion:(void (^ _Nonnull)(AccessTokenInfo * _Nullable, NSError * _Nullable))completion;
@end





@interface NSError (SWIFT_EXTENSION(XsollaSDKLoginKitObjectiveC))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeUnknown;)
+ (NSInteger)loginKitErrorCodeUnknown SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeASCanceledLogin;)
+ (NSInteger)loginKitErrorCodeASCanceledLogin SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeASpresentationContextNotProvided;)
+ (NSInteger)loginKitErrorCodeASpresentationContextNotProvided SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeASpresentationContextInvalid;)
+ (NSInteger)loginKitErrorCodeASpresentationContextInvalid SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeUnknownError;)
+ (NSInteger)loginKitErrorCodeUnknownError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeFailedURLExtraction;)
+ (NSInteger)loginKitErrorCodeFailedURLExtraction SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeAuthCodeExtractionError;)
+ (NSInteger)loginKitErrorCodeAuthCodeExtractionError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeNetworkLinkingError;)
+ (NSInteger)loginKitErrorCodeNetworkLinkingError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeInvalidToken;)
+ (NSInteger)loginKitErrorCodeInvalidToken SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) NSInteger loginKitErrorCodeInvalidRedirectUrl;)
+ (NSInteger)loginKitErrorCodeInvalidRedirectUrl SWIFT_WARN_UNUSED_RESULT;
@end


/// Set of parameters to perform authentication with the OAuth2 protocol.
SWIFT_CLASS("_TtC27XsollaSDKLoginKitObjectiveC12OAuth2Params")
@interface OAuth2Params : NSObject
/// Your application ID from <a href="https://publisher.xsolla.com/">Publisher Account</a>.
@property (nonatomic, readonly) NSInteger clientId;
/// Value used for additional user verification. Often used to mitigate <a href="https://en.wikipedia.org/wiki/Cross-site_request_forgery">CSRF Attacks</a>.
/// The value will be returned in the response. Must be longer than 8 characters.
@property (nonatomic, readonly, strong) NSString * _Nonnull state;
/// Grant type used in your project that has the enabled OAuth 2.0 protocol. Must be <em>code</em> to get the user authentication code in the response.
/// The received code must be exchanged to a JWT via the <a href="https://developers.xsolla.com/login-api/oauth-20/generate-jwt">Generate JWT</a>
/// method to finish user authentication.
@property (nonatomic, readonly, strong) NSString * _Nonnull responseType;
/// Scope is a mechanism in OAuth 2.0 to limit application’s access to a user’s account.
/// Can be:
/// 1. <em>email</em> for <a href="https://developers.xsolla.com/login-api/oauth-20/oauth-20-auth-via-social-network">Auth via social network</a>
/// or <a href="https://developers.xsolla.com/login-api/oauth-20/oauth-20-get-link-for-social-auth">Get link for social auth</a>
/// methods to additionally request an email from the user.
/// 2. <em>offline</em> to use <code>refresh_token</code> from <a href="https://developers.xsolla.com/login-api/oauth-20/generate-jwt">Generate JWT</a>
/// method to refresh the JWT when it is expired.
/// 3. <em>playfab</em> to write SessionTicket to the session_ticket claim of the JWT if you store user data on the PlayFab side.
/// If you process your own values of the <em>scope</em> parameter, and the values aren’t mentioned above, you can set them when using this method.
@property (nonatomic, readonly, strong) NSString * _Nullable scope;
/// URL to redirect the user to after account confirmation, successful authentication, or password reset confirmation.
/// To set up this parameter, contact your Account Manager.
@property (nonatomic, readonly, strong) NSString * _Nullable redirectUri;
- (nonnull instancetype)initWithClientId:(NSInteger)clientId state:(NSString * _Nonnull)state scope:(NSString * _Nullable)scope redirectUri:(NSString * _Nullable)redirectUri OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The type of getting the JWT.
typedef SWIFT_ENUM(NSInteger, TokenGrantType, open) {
/// To exchange the code received in the <a href="https://developers.xsolla.com/login-api/methods/oauth-20/oauth-20-auth-by-username-and-password/">method</a>
/// for a JWT.
  TokenGrantTypeAuthorizationCode = 0,
/// To get the refreshed JWT when the previous value is expired.
  TokenGrantTypeRefreshToken = 1,
/// To get the server JWT without user participation.
  TokenGrantTypeClientCredentials = 2,
};

@class ASWebAuthenticationSession;
@class UIWindow;

SWIFT_CLASS("_TtC27XsollaSDKLoginKitObjectiveC44WebAuthenticationPresentationContextProvider") SWIFT_AVAILABILITY(ios,introduced=13.4)
@interface WebAuthenticationPresentationContextProvider : NSObject <ASWebAuthenticationPresentationContextProviding>
- (ASPresentationAnchor _Nonnull)presentationAnchorForWebAuthenticationSession:(ASWebAuthenticationSession * _Nonnull)session SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithPresentationAnchor:(UIWindow * _Nonnull)presentationAnchor OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
