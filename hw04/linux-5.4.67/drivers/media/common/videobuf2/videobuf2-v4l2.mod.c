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
	{ 0x9fb1bc8, "vb2_core_streamoff" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3caab4d3, "vb2_core_dqbuf" },
	{ 0xbdaa62ae, "vb2_mmap" },
	{ 0x1b5360a3, "vb2_core_qbuf" },
	{ 0x3ed3650b, "vb2_core_querybuf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x47064460, "vb2_core_streamon" },
	{ 0xb6594f46, "vb2_core_poll" },
	{ 0x4ee559fc, "vb2_read" },
	{ 0x19245faa, "vb2_core_prepare_buf" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xe0e5f014, "v4l2_event_pending" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf3b1a873, "v4l2_fh_release" },
	{ 0xab11aa3e, "media_request_put" },
	{ 0x6df09836, "vb2_core_queue_release" },
	{ 0x7f2a4f02, "vb2_request_buffer_cnt" },
	{ 0x11476bb0, "vb2_write" },
	{ 0xd91f5043, "media_request_get_by_fd" },
	{ 0x9b102a1a, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5ffe18bc, "vb2_core_create_bufs" },
	{ 0xd9771f88, "vb2_core_expbuf" },
	{ 0xb0352ef2, "vb2_core_reqbufs" },
	{ 0xa60841dc, "vb2_verify_memory_type" },
	{ 0x7c52844c, "vb2_core_queue_init" },
	{ 0x1ad196a9, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,mc");


MODULE_INFO(srcversion, "6F55CEED13FD6AAE293F89C");
