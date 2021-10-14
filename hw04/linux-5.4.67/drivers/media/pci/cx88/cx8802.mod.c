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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2c0888b1, "cx88_risc_databuffer" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xde524a62, "cx88_sram_channel_setup" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x104dd74e, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x3978fecf, "vb2_buffer_done" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9067bfb2, "vb2_plane_cookie" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4fdf30c3, "cx88_core_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x27927129, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x593cdcaa, "cx88_core_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c9b7aa9, "cx88_shutdown" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x293e45e0, "cx88_wakeup" },
	{ 0x2100e907, "cx88_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "cx88xx,videobuf2-common");

MODULE_ALIAS("pci:v000014F1d00008802sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55DCEDBC35EADDA2A45085A");
