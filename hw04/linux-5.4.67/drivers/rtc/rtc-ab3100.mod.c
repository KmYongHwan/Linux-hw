#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x24043059, "abx500_get_register_page_interruptible" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x988c1bf9, "abx500_get_register_interruptible" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d99df8c, "abx500_mask_and_set_register_interruptible" },
	{ 0xb4816dc3, "abx500_set_register_interruptible" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "813E287421519BCAE283E33");
