
Pod::Spec.new do |s|

  s.name         = "YHCommonSDK"
  s.version      = "1.1.0.14"
  s.summary      = "YHCommonSDK is only a common sdk"

  s.description  = "YHCommonSDK is only a common sdk, we need pod thirdparty:afn"

  s.homepage     = "https://github.com/XmYlzYhkj/YHCommonSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHCommonSDK.git", :tag => s.version.to_s }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.dependency 'YYModel', '1.0.4'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'AFNetworking','~>3.1.0'
  s.dependency 'MJRefresh', '3.1.12'
  s.dependency 'SVProgressHUD', '2.1.2'
  s.dependency 'OpenUDID', '~> 1.0.0'
  s.dependency 'SAMKeychain', '~> 1.5.2'
  s.dependency 'SDAutoLayout', '~> 2.2.0'
  s.dependency 'YHNetSDK' #,  '1.0.0'
  s.dependency 'YHCategorySDK' #, '1.0.0'
  s.dependency 'YHAlertSDK' #, '1.0.0'
  s.dependency 'YHBaseSDK'  , '~> 1.1.5'
  s.dependency 'YHUtiliitiesSDK' #, '1.0.0'
  s.dependency 'YHEnDecriptionSDK', '~> 2.0.4'

  s.frameworks = "WebKit",'UIKit'

  s.vendored_frameworks = ["Framework/*.framework"]

  s.resources    = 'Resources/*.bundle'

  
  end
