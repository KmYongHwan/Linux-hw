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
	{ 0x34403dd9, "sof_io_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe9165ed4, "intel_ipc_pcm_params" },
	{ 0x5fe917a7, "snd_sof_load_firmware_memcpy" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xebc7c270, "snd_sof_dsp_panic" },
	{ 0xc83e0b46, "snd_sof_ipc_reply" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x76ce5819, "sof_io_read" },
	{ 0x6d018851, "intel_pcm_close" },
	{ 0x6547e9ba, "intel_pcm_open" },
	{ 0xb96a4e46, "sof_fw_ready" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x1bb564d1, "snd_sof_ipc_msgs_rx" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xe2aa1e4c, "intel_ipc_msg_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1a5f8358, "sof_mailbox_read" },
	{ 0x928ce057, "sof_mailbox_write" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd7969a64, "sof_io_read64" },
	{ 0x574e8b84, "snd_sof_get_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f4a730a, "sof_block_write" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x816596a0, "snd_sof_parse_module_memcpy" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc649a1b5, "snd_sof_dsp_update_bits64_unlocked" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xdf26c2df, "snd_sof_dsp_update_bits64" },
	{ 0x57774a70, "sof_io_write64" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xd6621b5a, "sof_block_read" },
};

MODULE_INFO(depends, "snd-sof,snd-sof-intel-ipc");


MODULE_INFO(srcversion, "119D8E89B802F57E8D43112");
