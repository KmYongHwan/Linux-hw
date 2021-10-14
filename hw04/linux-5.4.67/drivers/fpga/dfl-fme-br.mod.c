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
	{ 0xa14db6a4, "dfl_fpga_port_ops_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb084e1ef, "__dfl_fpga_cdev_find_port" },
	{ 0xb3a450a3, "dfl_fpga_check_port_id" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa5007667, "fpga_bridge_register" },
	{ 0x1d9cce46, "devm_fpga_bridge_create" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x85937798, "dfl_fpga_port_ops_put" },
	{ 0x7ea19302, "put_device" },
	{ 0x6fbf1ca9, "fpga_bridge_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl,fpga-bridge");


MODULE_INFO(srcversion, "873AAFD4B7E728D2C486716");
