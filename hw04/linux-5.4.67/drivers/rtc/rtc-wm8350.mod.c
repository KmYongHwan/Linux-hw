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
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x393598ec, "wm8350_reg_lock" },
	{ 0x580d049, "wm8350_reg_unlock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x58a57bfc, "devm_rtc_device_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x4d001d6, "wm8350_clear_bits" },
	{ 0x76335e73, "wm8350_block_write" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x51cb89cd, "wm8350_reg_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xec946816, "wm8350_block_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x20c596ce, "wm8350_set_bits" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9964C85466B18381E654B7");
