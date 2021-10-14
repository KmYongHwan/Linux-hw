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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xa637b975, "dma_ops" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7b260dc2, "scsicam_bios_param" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001DE1d00000391sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DAD1CEB42D6C6D73E7E403C");
