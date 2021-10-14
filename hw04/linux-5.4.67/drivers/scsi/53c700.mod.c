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
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xfcda597c, "spi_dv_device" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x16fdd06b, "spi_attach_transport" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xd198e31f, "__scsi_device_lookup" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x3e50cbe2, "spi_populate_tag_msg" },
	{ 0xb7b41b82, "spi_schedule_dv_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9a932668, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x9f0a02d4, "spi_display_xfer_agreement" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xba18006f, "scsi_report_bus_reset" },
	{ 0x8fc34588, "dma_cache_sync" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");


MODULE_INFO(srcversion, "1CE125EFE49D9760585D259");
