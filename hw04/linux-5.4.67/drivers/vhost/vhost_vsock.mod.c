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
	{ 0x763de475, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc7aeb95e, "virtio_transport_set_buffer_size" },
	{ 0xf4cb8cdd, "virtio_transport_destruct" },
	{ 0x5d01e3da, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x3dfae1cf, "vhost_dev_check_owner" },
	{ 0xba883ac4, "virtio_transport_get_max_buffer_size" },
	{ 0xe969568, "virtio_transport_notify_send_pre_block" },
	{ 0xd5952883, "virtio_transport_stream_has_space" },
	{ 0x2c4b325a, "_copy_from_iter" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd3242339, "virtio_transport_notify_poll_in" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x775b72de, "virtio_transport_do_socket_init" },
	{ 0xc2387a4b, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x31ee7a00, "__vsock_core_init" },
	{ 0xd47de69d, "vhost_dev_cleanup" },
	{ 0x99c2237b, "vhost_log_access_ok" },
	{ 0x361e44d4, "virtio_transport_deliver_tap_pkt" },
	{ 0xca6eff6f, "virtio_transport_set_min_buffer_size" },
	{ 0x5562e02c, "vhost_enable_notify" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x595262eb, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x1e771a1b, "virtio_transport_notify_poll_out" },
	{ 0xc93509c6, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6e0e2832, "vhost_disable_notify" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x47fda759, "misc_register" },
	{ 0xa0359a84, "vhost_signal" },
	{ 0x96284d03, "vhost_dev_ioctl" },
	{ 0xc5523695, "virtio_transport_stream_dequeue" },
	{ 0xfae74a93, "virtio_transport_stream_enqueue" },
	{ 0x730dce7b, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6d69dec, "vhost_get_vq_desc" },
	{ 0xc8a15fb4, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x752832c, "noop_llseek" },
	{ 0x4aba33e0, "vhost_work_queue" },
	{ 0x3e1f7652, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xff02ff14, "virtio_transport_get_buffer_size" },
	{ 0x36503bdb, "vhost_poll_queue" },
	{ 0xb0d228c2, "virtio_transport_dgram_dequeue" },
	{ 0x5f724a8c, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa79ee4e8, "vhost_exceeds_weight" },
	{ 0xc113f3d1, "virtio_transport_shutdown" },
	{ 0x5ead5c7e, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4eb108eb, "vhost_vq_init_access" },
	{ 0xbb8cf120, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x9ea33dc0, "virtio_transport_free_pkt" },
	{ 0x7c88668, "virtio_transport_dgram_bind" },
	{ 0xbe903a1e, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0xb78a800b, "virtio_transport_stream_rcvhiwat" },
	{ 0x7e842d2b, "virtio_transport_set_max_buffer_size" },
	{ 0x1158c1dd, "vhost_dev_init" },
	{ 0x130a6505, "vhost_dev_stop" },
	{ 0xd945c5f7, "vhost_vq_access_ok" },
	{ 0xc590d073, "virtio_transport_stream_has_data" },
	{ 0x4b9a84e1, "virtio_transport_connect" },
	{ 0x3ad90f4d, "vsock_for_each_connected_socket" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd76fc679, "vhost_vring_ioctl" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0xef85abe0, "virtio_transport_release" },
	{ 0x54964f2b, "virtio_transport_get_min_buffer_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x72429f1d, "virtio_transport_notify_recv_init" },
	{ 0xab255ad6, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "CE6C952D0299512BB1D0A22");
