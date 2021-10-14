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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Ctoshiba,et8ek8");
MODULE_ALIAS("of:N*T*Ctoshiba,et8ek8C*");
MODULE_ALIAS("i2c:et8ek8");

MODULE_INFO(srcversion, "7B0DEBE2F1B0D85F5E8ADEA");
