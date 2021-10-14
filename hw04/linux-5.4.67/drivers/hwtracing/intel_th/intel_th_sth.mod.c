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
	{ 0x3da496b7, "intel_th_driver_unregister" },
	{ 0x6d61262d, "intel_th_driver_register" },
	{ 0xf7375f78, "stm_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbba4149a, "intel_th_set_output" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0x39f301af, "stm_register_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "intel_th,stm_core");


MODULE_INFO(srcversion, "1C87D67ECA9A3A8F320B5B8");
