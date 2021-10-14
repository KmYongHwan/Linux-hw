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
	{ 0xa098317c, "iscsi_eh_cmd_timed_out" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x8ee1525d, "iscsi_target_alloc" },
	{ 0x91057e43, "iscsi_eh_recover_target" },
	{ 0x85d124fd, "iscsi_eh_device_reset" },
	{ 0xebc276fd, "iscsi_eh_abort" },
	{ 0x5bef4d9c, "iscsi_queuecommand" },
	{ 0x1493573c, "iscsi_session_recovery_timedout" },
	{ 0x51407c5c, "iscsi_tcp_cleanup_task" },
	{ 0x49489a8b, "iscsi_tcp_task_xmit" },
	{ 0xa60729d3, "iscsi_tcp_task_init" },
	{ 0x16f1cff7, "iscsi_conn_send_pdu" },
	{ 0xcc7a9d55, "iscsi_host_set_param" },
	{ 0x3d7f6c6c, "iscsi_session_get_param" },
	{ 0x334453b3, "iscsi_conn_start" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb00b16c1, "iscsi_unregister_transport" },
	{ 0x12814948, "iscsi_register_transport" },
	{ 0x9bc39af7, "crypto_alloc_ahash" },
	{ 0x389dda3a, "iscsi_tcp_conn_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0xfead2ba3, "iscsi_conn_stop" },
	{ 0xb60a7d32, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbfb3baa5, "iscsi_tcp_conn_teardown" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc6eb389b, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x81caf73f, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0x3fca0877, "iscsi_tcp_r2tpool_alloc" },
	{ 0x20e52a5, "iscsi_session_setup" },
	{ 0x7cd06440, "iscsi_host_add" },
	{ 0x51e54adb, "iscsi_host_alloc" },
	{ 0xa42b483a, "iscsi_host_free" },
	{ 0x71f78562, "iscsi_host_remove" },
	{ 0xe90f007e, "iscsi_session_teardown" },
	{ 0x753023b6, "iscsi_tcp_r2tpool_free" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x4410257, "iscsi_tcp_recv_skb" },
	{ 0x6576d907, "tcp_read_sock" },
	{ 0xf5017969, "iscsi_conn_queue_work" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xa0fd0123, "fput" },
	{ 0x387604c8, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x83561f0, "sk_set_memalloc" },
	{ 0x14a46819, "iscsi_conn_bind" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x85b46c93, "iscsi_tcp_set_max_r2t" },
	{ 0xa3dd0759, "sock_no_sendpage" },
	{ 0x64557eca, "iscsi_set_param" },
	{ 0xc8ce3710, "kernel_getpeername" },
	{ 0xc2d9368d, "iscsi_conn_get_param" },
	{ 0xb918ac63, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdad6a7e5, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd16f999b, "iscsi_tcp_conn_get_stats" },
	{ 0x6bfe9d3d, "iscsi_conn_failure" },
	{ 0xba312d7b, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5e4e2f7, "iscsi_tcp_segment_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3558c256, "iscsi_tcp_segment_done" },
	{ 0xcdf2263e, "kernel_sendmsg" },
	{ 0x99850702, "iscsi_tcp_dgst_header" },
	{ 0x649b8070, "iscsi_segment_seek_sg" },
	{ 0xc60237b2, "iscsi_segment_init_linear" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x601f5fcd, "iscsi_dbg_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp,scsi_transport_iscsi");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");
