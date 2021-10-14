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
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x445ce05b, "dma_free_attrs" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0xf1e046cc, "panic" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sADP0000*");
MODULE_ALIAS("eisa:sADP0001*");
MODULE_ALIAS("eisa:sADP0002*");
MODULE_ALIAS("eisa:sADP0400*");

MODULE_INFO(srcversion, "8A2BD7A1BD2F37BFEAEDF46");
