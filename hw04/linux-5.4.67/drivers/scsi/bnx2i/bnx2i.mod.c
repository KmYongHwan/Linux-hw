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
	{ 0x8fa32b66, "iscsi_offload_mesg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x71f78562, "iscsi_host_remove" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3d794174, "__iscsi_put_task" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x5bef4d9c, "iscsi_queuecommand" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfead2ba3, "iscsi_conn_stop" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x91057e43, "iscsi_eh_recover_target" },
	{ 0xb00b16c1, "iscsi_unregister_transport" },
	{ 0xe90f007e, "iscsi_session_teardown" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x7cd06440, "iscsi_host_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51e54adb, "iscsi_host_alloc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xe6566450, "iscsi_lookup_endpoint" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb9bf265d, "kthread_bind" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x334453b3, "iscsi_conn_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x16f1cff7, "iscsi_conn_send_pdu" },
	{ 0x3d7f6c6c, "iscsi_session_get_param" },
	{ 0xc8b1390d, "iscsi_conn_teardown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa42b483a, "iscsi_host_free" },
	{ 0xc2d9368d, "iscsi_conn_get_param" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdc25b27c, "blk_mq_rq_cpu" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x636af174, "cnic_unregister_driver" },
	{ 0x47847c32, "iscsi_destroy_endpoint" },
	{ 0x24d273d1, "add_timer" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x81533963, "sysfs_format_mac" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcb2565b3, "flush_signals" },
	{ 0x64557eca, "iscsi_set_param" },
	{ 0x727c56d0, "iscsi_session_failure" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd7c9263e, "cnic_register_driver" },
	{ 0x12814948, "iscsi_register_transport" },
	{ 0x85d124fd, "iscsi_eh_device_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6bfe9d3d, "iscsi_conn_failure" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa098317c, "iscsi_eh_cmd_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x177314ac, "iscsi_suspend_queue" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x664e951e, "iscsi_create_endpoint" },
	{ 0xebc276fd, "iscsi_eh_abort" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x20e52a5, "iscsi_session_setup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb918ac63, "iscsi_host_get_param" },
	{ 0x14a46819, "iscsi_conn_bind" },
	{ 0x4feeb97c, "__iscsi_complete_pdu" },
	{ 0x8ee1525d, "iscsi_target_alloc" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1493573c, "iscsi_session_recovery_timedout" },
	{ 0x3ff435ff, "iscsi_conn_setup" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x8a0acfae, "iscsi_itt_to_task" },
	{ 0x411a7498, "iscsi_host_for_each_session" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_iscsi,libiscsi,cnic");


MODULE_INFO(srcversion, "C1698C1347541627996A312");
