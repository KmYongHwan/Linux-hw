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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9739b85, "mantis_stream_control" },
	{ 0xb63c5799, "mantis_i2c_exit" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xd1be48fc, "mantis_gpio_set_bits" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xa970fe3c, "mantis_dvb_init" },
	{ 0xc5bfa303, "mantis_i2c_init" },
	{ 0x71a34895, "mantis_pci_exit" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x61460d69, "mantis_uart_exit" },
	{ 0xc5850110, "printk" },
	{ 0xd24cd6f5, "mantis_input_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd066431d, "mantis_get_mac" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xb69182bb, "mantis_dma_init" },
	{ 0xc5127621, "mantis_dma_exit" },
	{ 0x49a05168, "mantis_pci_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2239654f, "mantis_input_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x284d2626, "mantis_frontend_power" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd3c709b4, "mantis_frontend_soft_reset" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc1588de5, "mantis_uart_init" },
	{ 0xdaf30aa6, "mantis_dvb_exit" },
};

MODULE_INFO(depends, "mantis_core");

MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001178bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001179bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000043bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000024bc*sc*i*");

MODULE_INFO(srcversion, "0FF5C6755BFD155210A6814");
