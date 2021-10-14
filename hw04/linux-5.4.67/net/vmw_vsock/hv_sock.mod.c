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
	{ 0x66e9f04d, "release_sock" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x50edf20b, "vmbus_hvsock_device_unregister" },
	{ 0xdd8e542e, "__hv_pkt_iter_next" },
	{ 0x72f59d11, "__vsock_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x375aff77, "__vmbus_driver_register" },
	{ 0x1476ce48, "vmbus_set_chn_rescind_callback" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31ee7a00, "__vsock_core_init" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcd01428b, "hv_pkt_iter_close" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf7ecf58, "vsock_stream_has_data" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x9d781b9c, "lock_sock_nested" },
	{ 0xc6eb389b, "sk_free" },
	{ 0xbba70f96, "vmbus_open" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa538ceb7, "_copy_from_iter_full" },
	{ 0xdca84968, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x1689a306, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xb7cbe876, "hv_pkt_iter_first" },
	{ 0x5ecdac6f, "vmbus_sendpacket" },
	{ 0x40b8cfdf, "vsock_remove_sock" },
	{ 0x4b2210b8, "vmbus_send_tl_connect_request" },
	{ 0xef9972e, "vsock_insert_connected" },
	{ 0x523cfbfd, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf254fb36, "vsock_enqueue_accept" },
	{ 0xb27f114a, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,vsock");


MODULE_INFO(srcversion, "C9A27535EBF87B9D903E67B");
