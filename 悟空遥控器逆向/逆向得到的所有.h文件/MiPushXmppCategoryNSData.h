//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MiPushXmppCategoryNSData : NSObject
{
}

+ (id)RC4DecryptWithDataKey:(id)arg1 source:(id)arg2;
+ (id)RC4EncryptWithDataKey:(id)arg1 source:(id)arg2;
+ (id)RC4EncryptDecryptWithDataKey:(id)arg1 operation:(unsigned int)arg2 source:(id)arg3;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)decryptAESWithKeyAndIV:(id)arg1 iv:(id)arg2 source:(id)arg3;
+ (id)encryptAESWithKeyAndIV:(id)arg1 iv:(id)arg2 source:(id)arg3;
+ (id)AES256EncryptWithKey:(id)arg1 source:(id)arg2;
+ (id)AES128DecryptWithDataKey:(id)arg1 source:(id)arg2;
+ (id)AES128DecryptWithKey:(id)arg1 source:(id)arg2;
+ (id)encryptAESWithKey:(id)arg1 source:(id)arg2;
+ (id)AES128Decrypt:(id)arg1;
+ (id)AES128Encrypt:(id)arg1;
+ (id)base64Decoded:(id)arg1;
+ (id)base64Encoded:(id)arg1;
+ (id)hexStringValue:(id)arg1;
+ (id)sha1Digest:(id)arg1;
+ (id)md5Digest:(id)arg1;

@end

