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
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x84102e84, "rtc_add_group" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3028C*");

MODULE_INFO(srcversion, "F8E67731EC2E4F29D50526D");
