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
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xede283d, "release_firmware" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x71deb539, "request_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "9648FD436AF28DE004D4C8A");
