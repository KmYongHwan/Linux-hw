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
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19ae3c48, "wm831x_reg_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4ee5f1ff, "wm831x_bulk_read" },
	{ 0xa2839c7d, "wm831x_reg_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x95d7801d, "wm831x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C8AAC81B7025E90E6FFC150");
