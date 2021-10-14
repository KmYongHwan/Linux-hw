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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x69acdf38, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xff76d558, "input_register_device" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2901b4a8, "input_alloc_absinfo" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xede283d, "release_firmware" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x71deb539, "request_firmware" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cazoteq,iqs550");
MODULE_ALIAS("of:N*T*Cazoteq,iqs550C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572");
MODULE_ALIAS("of:N*T*Cazoteq,iqs572C*");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525");
MODULE_ALIAS("of:N*T*Cazoteq,iqs525C*");
MODULE_ALIAS("i2c:iqs550");
MODULE_ALIAS("i2c:iqs572");
MODULE_ALIAS("i2c:iqs525");

MODULE_INFO(srcversion, "DE7173C3EF861DFF273A4E6");
