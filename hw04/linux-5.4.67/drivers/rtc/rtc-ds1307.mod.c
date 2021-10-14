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
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0x84102e84, "rtc_add_group" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0xd8a8ad6d, "devm_hwmon_device_register_with_groups" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xe88346b7, "devm_clk_register" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x96848186, "scnprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:DS1307:*");
MODULE_ALIAS("acpi*:DS1308:*");
MODULE_ALIAS("acpi*:DS1337:*");
MODULE_ALIAS("acpi*:DS1338:*");
MODULE_ALIAS("acpi*:DS1339:*");
MODULE_ALIAS("acpi*:DS1388:*");
MODULE_ALIAS("acpi*:DS1340:*");
MODULE_ALIAS("acpi*:DS1341:*");
MODULE_ALIAS("acpi*:DS3231:*");
MODULE_ALIAS("acpi*:M41T0:*");
MODULE_ALIAS("acpi*:M41T00:*");
MODULE_ALIAS("acpi*:M41T11:*");
MODULE_ALIAS("acpi*:MCP7940X:*");
MODULE_ALIAS("acpi*:MCP7941X:*");
MODULE_ALIAS("acpi*:PT7C4338:*");
MODULE_ALIAS("acpi*:RX8025:*");
MODULE_ALIAS("acpi*:ISL12057:*");
MODULE_ALIAS("acpi*:RX8130:*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "D0F514597A93F8E4AF01440");
