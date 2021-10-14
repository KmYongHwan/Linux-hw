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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0x42d6f363, "__devm_regmap_init_spi" },
	{ 0x2cd9f628, "rtc_nvmem_register" },
	{ 0x9ae6bf13, "__rtc_register_device" },
	{ 0x84102e84, "rtc_add_group" },
	{ 0x4b8b9322, "devm_watchdog_register_device" },
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");

MODULE_INFO(srcversion, "7765336F7F7AA39AD9B4E6F");
