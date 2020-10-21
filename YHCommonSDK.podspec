
Pod::Spec.new do |s|

  s.name         = "YHCommonSDK"
  s.version      = "2.0.0"
  s.summary      = "YHCommonSDK is only a common sdk"

  s.description  = "YHCommonSDK is only a common sdk, we need pod thirdparty:afn"

  s.homepage     = "https://github.com/XmYlzYhkj/YHCommonSDK"

  s.license      = "MIT "

  s.author       = { "zhengxiaolang" => "haifeng3099@126.com" }
  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHCommonSDK.git", :tag => s.version.to_s }

  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  s.dependency 'MJRefresh'
  s.dependency 'OpenUDID'
  s.dependency 'SAMKeychain'
  s.dependency 'SDAutoLayout'
  s.dependency 'Reachability'

  s.dependency 'YHNetSDK'
  s.dependency 'YHCategorySDK'
  s.dependency 'YHAlertSDK'
  s.dependency 'YHBaseSDK'
  s.dependency 'YHUtiliitiesSDK'
  s.dependency 'YHEnDecriptionSDK'

  s.frameworks = "WebKit",'UIKit'

  s.resources    = 'Resources/*.bundle'

  s.default_subspecs = 'Default'

  s.vendored_frameworks = ["Framework/*.framework"]

  s.subspec 'Default' do |sp|
    sp.vendored_frameworks = ["Framework/Default/*.framework"]      
    sp.dependency 'YYModel', '~> 1.0'
  end

  s.subspec 'YHModel' do |sp|
    sp.vendored_frameworks = ["Framework/YHModel/*.framework"]
    sp.dependency 'YHModel'
  end

  end
