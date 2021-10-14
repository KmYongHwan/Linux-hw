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
	{ 0x74d46467, "devm_rtc_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xacde7892, "rtc_update_irq" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8803");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8803C*");
MODULE_ALIAS("of:N*T*Cepson,rx8803");
MODULE_ALIAS("of:N*T*Cepson,rx8803C*");
MODULE_ALIAS("of:N*T*Cepson,rx8900");
MODULE_ALIAS("of:N*T*Cepson,rx8900C*");
MODULE_ALIAS("i2c:rv8803");
MODULE_ALIAS("i2c:rx8803");
MODULE_ALIAS("i2c:rx8900");

MODULE_INFO(srcversion, "68868522B10F9DD0A73E141");
