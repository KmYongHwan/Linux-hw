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
	{ 0x890b3d61, "_dev_err" },
	{ 0xf050db23, "adxl34x_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x49a4fcbd, "adxl34x_remove" },
	{ 0x66535a18, "adxl34x_suspend" },
	{ 0xe4586827, "adxl34x_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adxl34x");

MODULE_ALIAS("of:N*T*Cadi,adxl345");
MODULE_ALIAS("of:N*T*Cadi,adxl345C*");
MODULE_ALIAS("of:N*T*Cadi,adxl34x");
MODULE_ALIAS("of:N*T*Cadi,adxl34xC*");
MODULE_ALIAS("i2c:adxl34x");

MODULE_INFO(srcversion, "A8EC2311FE69BA46699E517");
