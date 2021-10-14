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
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xc5754810, "iio_channel_get_all_cb" },
	{ 0xff76d558, "input_register_device" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x1417fdc, "devm_iio_channel_get_all" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0x5ada0011, "input_event" },
	{ 0xdbcf3e33, "touchscreen_report_pos" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio-buffer-cb,industrialio");

MODULE_ALIAS("of:N*T*Cresistive-adc-touch");
MODULE_ALIAS("of:N*T*Cresistive-adc-touchC*");

MODULE_INFO(srcversion, "EF0C5003722401D9CD7B5F6");
