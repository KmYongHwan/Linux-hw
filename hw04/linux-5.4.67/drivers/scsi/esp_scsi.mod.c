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
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xfcda597c, "spi_dv_device" },
	{ 0xba00a9d4, "scsi_track_queue_full" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x16fdd06b, "spi_attach_transport" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8558edbe, "__starget_for_each_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3e50cbe2, "spi_populate_tag_msg" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x9a932668, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a024ffd, "__scsi_device_lookup_by_target" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f0a02d4, "spi_display_xfer_agreement" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xa637b975, "dma_ops" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");


MODULE_INFO(srcversion, "619C56775FC3FE4ECBFE74B");
