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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0x5d6b44a4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x23b06446, "mpt_HardResetHandler" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0xc4142837, "seq_printf" },
	{ 0x13383b3b, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92a78c5a, "mpt_halt_firmware" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb1161a08, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1deaa209, "mpt_send_handshake_request" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4893214e, "mpt_put_msg_frame" },
	{ 0x973b41a5, "mpt_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa43ea241, "mpt_Soft_Hard_ResetHandler" },
	{ 0x7b54272a, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xc4d8dec4, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x78f9af10, "mpt_print_ioc_summary" },
	{ 0x81caf73f, "blk_queue_dma_alignment" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbf855d72, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7c939c77, "mpt_suspend" },
	{ 0x7a72769, "mpt_detach" },
	{ 0x4a79afb9, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0x102ffa7f, "mpt_put_msg_frame_hi_pri" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "CA6F5D79018C6C4DD7742D0");
