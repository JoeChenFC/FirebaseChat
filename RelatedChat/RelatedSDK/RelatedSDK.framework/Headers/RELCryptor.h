//
// Copyright (c) 2016 Related Code - http://relatedcode.com
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
 
//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface RELCryptor : NSObject
//-------------------------------------------------------------------------------------------------------------------------------------------------

+ (NSString *)encryptText:(NSString *)text groupId:(NSString *)groupId;
+ (NSString *)decryptText:(NSString *)text groupId:(NSString *)groupId;

+ (NSData *)encryptData:(NSData *)data groupId:(NSString *)groupId;
+ (NSData *)decryptData:(NSData *)data groupId:(NSString *)groupId;

+ (void)encryptFile:(NSString *)path groupId:(NSString *)groupId;
+ (void)decryptFile:(NSString *)path groupId:(NSString *)groupId;

@end
