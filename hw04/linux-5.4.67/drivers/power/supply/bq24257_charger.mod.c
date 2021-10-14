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
	{ 0x9a43e199, "_dev_info" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0xb83fb93d, "devm_regmap_field_alloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x96848186, "scnprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x1fb7bf51, "regcache_drop_region" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x395d7993, "regmap_field_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xc066a4ca, "regmap_field_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BQ242500:*");
MODULE_ALIAS("acpi*:BQ242510:*");
MODULE_ALIAS("acpi*:BQ242570:*");
MODULE_ALIAS("of:N*T*Cti,bq24250");
MODULE_ALIAS("of:N*T*Cti,bq24250C*");
MODULE_ALIAS("of:N*T*Cti,bq24251");
MODULE_ALIAS("of:N*T*Cti,bq24251C*");
MODULE_ALIAS("of:N*T*Cti,bq24257");
MODULE_ALIAS("of:N*T*Cti,bq24257C*");
MODULE_ALIAS("i2c:bq24250");
MODULE_ALIAS("i2c:bq24251");
MODULE_ALIAS("i2c:bq24257");

MODULE_INFO(srcversion, "23B7E11A3A979469F81B095");
