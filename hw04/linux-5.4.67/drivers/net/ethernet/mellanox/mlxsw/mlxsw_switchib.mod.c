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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0x48f1b8a5, "mlxsw_core_trap_register" },
	{ 0x2540818b, "mlxsw_core_driver_unregister" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0x966b321b, "mlxsw_pci_driver_register" },
	{ 0xa280bcf9, "mlxsw_pci_driver_unregister" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5877d57a, "mlxsw_core_driver_register" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcd439aab, "mlxsw_core_trap_unregister" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x8854d198, "mlxsw_reg_write" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_pci");

MODULE_ALIAS("pci:v000015B3d0000CF08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000CB20sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "76BBE8D1CE436202C823A78");
