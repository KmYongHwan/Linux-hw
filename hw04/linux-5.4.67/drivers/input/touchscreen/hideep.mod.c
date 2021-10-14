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
	{ 0x6a14014e, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xede283d, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x71deb539, "request_firmware" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x923438df, "devm_device_add_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x155277eb, "touchscreen_parse_properties" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:HIDP0001:*");
MODULE_ALIAS("i2c:hideep_ts");

MODULE_INFO(srcversion, "B8C730724B68AF8246EFCC9");
