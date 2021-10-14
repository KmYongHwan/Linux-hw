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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x431da1a1, "scsi_eh_restore_cmnd" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xf1e046cc, "panic" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x44566abf, "blk_queue_bounce_limit" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe2bca26a, "scsi_eh_prep_cmnd" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b260dc2, "scsicam_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,scsi_transport_spi");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCDF7E4CCpb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24BA9738pb3A3C3D20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb80A6535Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb5F9A615Bpc*pd*");

MODULE_INFO(srcversion, "CE495F7A434980790A2D116");
